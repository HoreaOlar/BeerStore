#include<iostream>
#include<assert.h>
#include<cstring>
#include<vector>	

using namespace std;

enum Container{bottle, can, pint};

class Beer{
	private:
		Container container;
		string name;
    
	public:
	Beer(string name, Container container){
		this->container = container;
		this->name=name;
	}
	//Beer()=delete;
	//Beer(Beer const& other)=delete;
	string getName();
	
	Container getContainer();
		
};

string Beer::getName(){
	return name;
}

Container Beer::getContainer(){
	return container;
}

class Store{
	private: 
		//Beer deposit[100];
		vector<Beer> deposit;
	
	public: void menu();
	
	public: void addBeer(string name, Container container);
	
	public: void showBeers();
};


void Store::menu(){
	cout<<"1. Add beer"<<endl;
	cout<<"2. Show beers"<<endl;
	cout<<"3. Exit"<<endl;
}

void Store::addBeer(string name, Container container){
	for(int i=0;i<deposit.size();i++)
	{
		if(deposit[i].getName()==name && deposit[i].getContainer()==container)
		{
			Beer newBeer = Beer(deposit[i]);
			deposit.push_back(newBeer);
			return;
		}
	}
	
	Beer newBeer = Beer(name, container);
	deposit.push_back(newBeer);
}

string container_to_string(Container c){
	switch(c){
		case bottle: return "bottle";break;
		case can: return "can";break;
		case pint: return "pint";break;
		default: return "";
	}
}

void Store::showBeers(){
	for(int i=0;i<deposit.size();i++)
		cout<<deposit[i].getName()<<" in "<<container_to_string(deposit[i].getContainer())<<endl;
}

int main(){
	Store myStore= Store();
	
	while(1){
		int op;
		Container container;
		string name;
		myStore.menu();
		cin>>op;
		if(op==1){
			cout<<"What's it called?"<<endl;
			cin>>name;
			cout<<"What container does it have?"<<endl;
			cout<<"1-bottle"<<endl<<"2-can"<<endl<<"3-pint"<<endl;
			cin>>op;
			switch(op){
				case 1: container= bottle;
						break;
			    case 2: container= can;
			    		break;
			    case 3: container= pint;
			    		break;
			}
			
			myStore.addBeer(name, container);
		}
		else if(op==2)myStore.showBeers();
		else if(op==3)exit(0);
	} 
	
	return 0;
}

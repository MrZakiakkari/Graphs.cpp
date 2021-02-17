// graph Tree.cpp : Defines the entry point for the console application.
//


#include <iomanip>
#include <iostream>
#include <string>
#include "Graph.h"

using namespace std;


const int InsertCode = 1;
const int PrintCode = 2;
const int PrintMenuCode = 3;
const int ExitCode = 7;



void PrintMenu() {

	cout << "Type " << InsertCode << " to insert an item to the graph " << endl;
	cout << "Type " << PrintCode << " to print the graph " << endl;
	cout << "Type " << PrintMenuCode << " to Print the Menu." << endl;
	cout << "Type " << ExitCode << " To Exit the program." << endl;

}
void InValidOption() {
	cout << "Invalid option entered." << endl;
	PrintMenu();
}

GraphType<string> graph;

void InsertGraph() {
	string name;
	string relation;
	string secondname;
	do
	{
		cout << "\nPlease enter vertix name\n";
		cin >> name;
		cout << "\nPlease enter edge\n";
		cin >> relation;
		cout << "\nPlease enter second name\n";
		cin >> secondname;
		if (name != "0"&& secondname!="0")
		{
			cout << "Now adding " << name<<relation<<secondname << endl;
			graph.AddVertex(name);
			graph.AddEdge(relation);
			graph.AddVertex(secondname);
			cout << "it has been added";
		}
	} while (name != "0");

}

void PrintgraphTree() {
	cout << "Printgraph: (Enter 0 to cancel)" << endl;
	cout << "graph " << endl;
	//cout << graph.ToString() << endl;
}


void ClearTree() {

	//graph.Clear();
	cout << "all cleared" << endl;
}


void InitializegraphTree()
{

	/*graph.Insert("Tom");
	graph.Insert("Ursula");
	graph.Insert("Mary");
	graph.Insert("Zaki");
	graph.Insert("Tim");
	graph.Insert("Amy");
	*/

}




int main()
{
	bool run = true;
	int option = -1;

	PrintMenu();

	InitializegraphTree();
	do
	{
		cin >> option;
		switch (option)
		{
		case PrintCode:
			PrintgraphTree();
			break;
		case InsertCode:
			InsertGraph();
			break;
		case PrintMenuCode:
			PrintMenu();
			break;
		case ExitCode:
			run = false;
			break;
		default:
			InValidOption();
			break;
		}


		//The Progam
	} while (run);

}

////////////////////////////////////////////
//	Concole application C++		          //
//					                      //
//	       <LISTS>                        //
//					                      //
//	 Author Dmitry Murat		          //
///////////////////////////////////////////

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

// data structure
struct Data
{
    int key;
};

// list element - node
struct Node
{
    Data datum;
    Node* next;
};


void printFunc (Node* ptr)
{
    Node * print = ptr;

    while(print)
    {
        cout << "\t" << print->datum.key << "->";
       // move on next element
        print = print->next;
    }
    cout << "Null\n";
}

void listInit ( Node ** begin)
{
    *begin = new Node;

    (*begin)->datum.key = 0;
    (*begin)->next = NULL;

    Data massdata[5] = {13,254,376,444,504};

    Node *end = *begin;
    for (int i(0); i < 5 ; i++ )
    {
        end->next = new Node;
        end = end->next;
        end->datum = massdata[i];
        end->next = NULL;
    }
}


void addBegin (Node ** begin, const Data& intel )
{
    Node * temporary = new Node;
    temporary->datum = intel;
    temporary->next = (*begin);
    (*begin) = temporary;
}


int main( int argc, char* argv[])
{
   // ptr begin on 0
    Node* begin = NULL;

    Data intel  = {-12};

    // list initiation function
    listInit(&begin);

    addBegin(&begin,intel);

   // screen out function
    printFunc(begin);


    system("pause");
    return 0;
}

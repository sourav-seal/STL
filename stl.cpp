
/* CPP program to show the implementation of List
#include <iostream>
#include <iterator>
#include <list>*/
#include <bits/stdc++.h>
using namespace std;
  
// function for printing the elements in a list
void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
int main(){

    list<int> n;
    n.push_back(1);
    n.push_back(2);
    n.push_front(7);
    cout<<"List : ";
    showlist(n);
    return 1;
}

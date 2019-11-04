#include <iostream>
#include <vector>
#include <string>
#include <istream>
#include <iterator>
#include <list>
#include <forward_list>
using namespace std;

int main(int argc, char **argv) {
    //istreambuf demo
    std::istreambuf_iterator<char> isbeos; // end-of-range iterator
    std::istreambuf_iterator<char> isbuf(std::cin.rdbuf()); //stdin iterator
    
     
    std::string mystring;
    cout << "Please enter some text and the return key when finished: ";
    
    while (isbuf != isbeos && *isbuf != '\n') {
        mystring += *isbuf++;
    }
    
    cout << "\n" << "The text you entered was " << mystring.c_str() << ".\n\n";
    
    //istream
    int val1, val2;
    cout << "Please enter two integers: ";
    std::istream_iterator<int> iseos; // end-of-stream iterator
    std::istream_iterator<int> is(std::cin); //stdin iterator
    
    if (is!= iseos && *is !='\n'){
        val1 = *is;
    }
    ++is;
    if(is!=iseos && *is!='\n'){
        val2 = *is;
    }
    
    cout << "\n" << "You entered values: " << val1 << " and " << val2 << "\n\n";
    
    //forward iterator
    forward_list<int> fwdlist;
    forward_list<int>::iterator fwdlistiter;
    fwdlist.push_front(3);
    fwdlist.push_front(2);
    fwdlist.push_front(1);

    cout << "Forward iterator traversal of forward_list." << endl;
    for (fwdlistiter = fwdlist.begin(); fwdlistiter != fwdlist.end(); fwdlistiter++) {
        cout << (*fwdlistiter) << endl;
    }
    cout << "\n";
    
    
    //reverse iterator
    list<int> li;
    list<int>::iterator listiter;
    list<int>::reverse_iterator revlistiter;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);

    //Forward traversal
    cout << "Forward traversal of list." << endl;
    for (listiter = li.begin(); listiter != li.end(); listiter++) {
        cout << (*listiter) << endl;
    }

    //Reverse traversal.
    cout << "Reverse traversal of list." << endl;
    for (revlistiter = li.rbegin(); revlistiter != li.rend(); revlistiter++) {
        cout << (*revlistiter) << endl;
    }
    
    //random iterator
    vector<int> v;
    vector<int>::iterator iter;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    iter = v.begin();
    iter +=2;
    cout << *iter << endl;
    cout << "Random Access iterator vecor beginning + offset 2 is "<<*iter<<"\n" << endl;
    
    cout << "Traverse int array with pointer " << endl;
    int intarray[3];
    intarray[0] = 1;
    intarray[1] = 2;
    intarray[2] = 3;
    int* endintarray = intarray + 3;
    for (int* ptr = intarray; ptr < endintarray; ptr += 1)
    {
        cout << *ptr << endl;
    }
    return 0;
}

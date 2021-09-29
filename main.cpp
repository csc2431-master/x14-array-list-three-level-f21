#include <assert.h>
#include <iostream>
using std::cout;
using std::endl;

#include "FixedArrayList.h"
#include "VariableArrayList.h"

void ReverseList(List<int>& L);

int main() {
    FixedArrayList<int> LFixed(5);
    VariableArrayList<int> LVariable;

    // Load lists with numbers
    LFixed.Insert(0,47);
    LFixed.Insert(1,2);
    LFixed.Insert(2,39);
    LFixed.Insert(3, 54);
    LFixed.Insert(4, 10);

    LVariable.Insert(0,-2);
    LVariable.Insert(1,88);
    LVariable.Insert(2,0);
    LVariable.Insert(3, 101);

    // Reverse lists
    cout << "FixedArrayList before calling ReserveList: " << LFixed << endl;
    ReverseList(LFixed);
    cout << "FixedArrayListList after calling ReserveList: " << LFixed << endl;
    cout << "VariableArrayList before calling ReserveList: " << LVariable << endl;
    ReverseList(LVariable);
    cout << "VariableArrayListList after calling ReserveList: " << LVariable << endl;
    return 0;
}

void ReverseList(List<int>& L) {
    if (L.Size() > 1) {
        int last;

        L.Remove(L.Size() - 1, last);
        ReverseList(L);
        L.Insert(0, last);
    }
}

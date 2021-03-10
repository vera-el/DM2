#include "dm2.h"

#include <iostream>
using namespace std;

#define tab "\t"



//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

int main()
{
    setlocale (LC_ALL, "Russian");
    int m;    int n;
    cout<< "Enter the number of rows: "; cin >> m;    cout<< "Enter the number of cols: "; cin >> n;

    // Sozdaem massiv ukazateley
    int** arr = new int*[m];
    //
    for (int i=0;i < m;i++)
            arr[i] = new int[n];
    
    
    cout<< endl;
         
//
    #ifdef DYNAMIC_MEMORY_1
    int n = 5;
    int *arr = new int[n];

    FillRand (arr,n);
    Print (arr,n);
    push_back (arr,n,10);
    Print (arr,n);
    push_front (arr,n, 23);
    Print (arr,n);
    insert (arr, n, 3,  29);
    Print (arr,n);
    pop_front (arr,n);
    Print (arr,n);
    #endif

    FillRand (arr,m,n);
    Print (arr,m,n);
    cout << "Push back the row in the end of the array:  " << endl;
    //clear(arr,m);
    //arr = allocate (m,n);
    arr = push_back_row(arr, m, n);
    Print (arr,m,n);
    
    cout << "Push front the row in the begining of the array:  " << endl;
    arr = push_row_front(arr, m, n);
    Print (arr,m,n);
   
    cout << "Push front the col in the begining of the array:  " << endl;
    arr= push_col_front(arr, m,n);
    Print (arr,m,n);
    
    int index;
    cout<< "Enter the number for column index: "; cin >> index;
    arr = insert_col(arr, m, n, index);
    Print (arr,m,n);
    
    cout << "Pop front the col of the array:  " << endl;
    arr = pop_col_front(arr, m, n);
    Print (arr,m,n);
    
    cout << "Pop back the col of the array:  " << endl;
    arr = pop_col_back(arr, m, n);
    Print (arr,m,n);
}

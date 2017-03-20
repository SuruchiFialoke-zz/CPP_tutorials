//
//  main.cpp
//  Test14
//  C++ program to implement merge Sort
//  Created by Suruchi on 3/16/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <iostream>
using namespace std ;

void selectionSort(int*, int) ;
/*
// selectionSort ==> Sorts an array of integers
// @param int* ==> array to be sorted
// @param int ==> size of the array
// Algo: Select the shortest and swap to front
*/

void bubbleSort(int*, int) ;
/*
// bubbleSort ==> Sorts an array of integers
// @param int* ==> array to be sorted
// @param int ==> size of the array
// Algo: Compare 2 elements and swap, repeat
*/

void insertionSort(int*, int) ;
/*
// insertionSort ==> Sorts an array of integers
// @param int* ==> array to be sorted
// @param int ==> size of the array
// Algo: builds the final sorted array (or list) one item at a time
// pick a Key i = 1 to n, put it in correct place to it's left
*/

void mergeSortTopDown(int*, int) ;
/*
// mergeSortTopDown ==> Sorts an array of integers by divide & merge
// @param int* ==> array to be sorted
// @param int ==> size of the array
*/

void merge( int*, int*, int, int*, int);
/*
// merge ==> merges two sorted arrays by comparing them in a final array
// @param int* ==> array generated from merger
// @param int* ==> left array to be merged
// @param int ==> size of the left array
// @param int* ==> right array to be merged
// @param int ==> size of the right array
*/
int main() {
    int n = 10;
    int A[] = {10, 1 , 8, 7, 3, -1, 6, 5, 2, 4};
    /*
     cout<<"Enter the size of the array"<<endl;
     cin>>n;
     cout<<"Enter the elements in the array"<<endl;
     for(int i=0; i<n; i++) cin>>A[i];
     */
    
    /*
     cout<<"Started sorting using selection sort..."<<endl;
     selectionSort(A,n) ;
     */
    /*
     cout<<"Started sorting using bubble sort...\n";
     bubbleSort(A,n) ;
     */
    /*
     cout<<"Started sorting using insertion sort...\n";
     insertionSort(A,n) ;
     */
    
    cout<<"Started sorting using top down merge sort...\n";
    mergeSortTopDown(A,n) ;
    
    
    cout<<"sorted form \n";
    for(int i=0; i<n; i++) cout<<A[i]<<"  ";
    cout<<'\n' ;

    return 0;
}

// Selection Sort
void selectionSort(int *Arr, int nElem) {
    
    int iMin ;
    //iMin ==> running index of minimum element
    
    for(int i=0; i<nElem-1; i++) {
        iMin = i ;
        for(int j=i+1; j<nElem; j++) {
            if (Arr[j] < Arr[iMin]) iMin = j ;
            //update the index of minimum element
        } // j loop O( (n-1) + (n-2) ...2,1) = n(n-1)/2
        
        if(iMin != i ) swap(Arr[iMin], Arr[i]) ; // Swap if index i did not have minimum element
    } // i loop O(4(n-1))
}
// Selection Sort


// Bubble Sort
void bubbleSort(int Arr[], int nElem) {
    bool isSorted = 1 ;
    for (int pass=0; pass<nElem-1; pass++) {
        for (int i=0; i<nElem-1-pass; i++) {
            if(Arr[i] > Arr[i+1]) {
                swap(Arr[i],Arr[i+1]) ;
                isSorted = 0;
            }
        } // O( (n-1) + (n-2) ...2,1) = n(n-1)/2
        if(isSorted) break ;
    } //O(n-1)
    if(isSorted) cout<<"Array was already Sorted...!\n" ;
}
// Bubble Sort


// Insertion Sort
void insertionSort(int *Arr, int nElem) {
    for (int i=1; i<nElem; i++){
        int key = Arr[i] ;
        int j = i - 1 ;
        while (j >= 0 && Arr[j] > key) {
            Arr[j+1] = Arr[j] ;
            Arr[j] = key ;
            j = j - 1 ;
        }
    }
}
// Insertion Sort


// The recursive merge sort function
// Top down approach
void mergeSortTopDown(int *Arr, int nElem){
    
    int midIndex, i, *leftArr, *rightArr, nLeft, nRight;
    
    // Criteria for exiting the recursion
    if (nElem < 2) return ;
    
    //First, get index of mid element
    midIndex = nElem/2;
    
    nLeft = midIndex ;
    nRight = nElem - nLeft ;
    
    // create left and right subarrays
    // nLeft elements (from index 0 till midIndex-1) should be part of left sub-array
    // and nRight elements (from midIndex to n-1) will be part of right sub-array
    
    leftArr = (int*) malloc(nLeft * sizeof(int));
    rightArr = (int*) malloc(nRight * sizeof(int));
    
    for(i = 0; i<midIndex; i++) leftArr[i] = Arr[i]; // creating left sub-array
    for(i = midIndex; i<nElem; i++) rightArr[i-midIndex] = Arr[i]; // creating right sub-array
    
    // First recursive call for left sub-array
    mergeSortTopDown(leftArr, nLeft);
    
    //Second recursive call for right half of array
    mergeSortTopDown(rightArr, nRight);


    //Then merge by calling merge function
    merge(Arr, leftArr, nLeft, rightArr, nRight);
    cout<<"mergeing: "<<leftArr[0]<<" ("<<nLeft<<") "<<rightArr[0]<<" ("<<nRight<<")\n" ;
    
    // free the dynamic arrays
    free(leftArr);
    free(rightArr);
}

void merge (int *Arr, int *leftArr, int nL, int *rightArr, int nR) {
    
    // i -  index of left aubarray (leftArr)
    // j -  the index of right sub-raay (rightArr)
    // k -  the index of merged subarray (myArr)
    
    int i = 0; int j = 0; int k = 0;
    
    // Merge elements of both the sub arrays
    while ((i < nL) && (j < nR)){
        
         if (leftArr[i] < rightArr[j]) Arr[k++] = leftArr[i++] ;
         else Arr[k++] = rightArr[j++] ;
        
    }
    // copy leftover elements
    while (i < nL) Arr[k++] = leftArr[i++];
    while (j < nR) Arr[k++] = rightArr[j++];
    
}

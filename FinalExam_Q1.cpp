/* Create 10 element array of integers. Use cin method to enter an elements of the array. 
   Pass the 10 element array to the function. 
   In the function, code should find and print out the smallest and largest integer numbers and their indecies in array. 
   Array also should be sorted in descending order. Use pointers to pass the array to the function.*/

#include <iostream>
#include <algorithm>
using namespace std;
 
 
void print_array_statistics (int *integers, int integers_size)
{
    /*printing an initial array*/
    cout<<"Unsorted array elements:"<<"  ";
    for (int i=0; i<integers_size; i++)
    {
        cout << integers[i] << "  ";
    }
 
 
    /*finding the largest number*/
    int max = integers[0];
    int max_index = 0;
 
    for (int i=1; i<integers_size; i++)
    {
        if(integers[i] > max)
        {
            max = integers[i];
            max_index = i;
        }
    }
    cout << "\nThe largest number is: "<< max <<", index " << max_index << endl;
    
    
    /*finding the smallest number*/
    int min = integers[0];
    int min_index = 0;
 
    for (int i=1; i<integers_size; i++)
    {
        if(integers[i] < min)
        {
            min = integers[i];
            min_index = i;
        }
    }
    cout << "The smallest number is: "<< min <<", index " << min_index << endl;
 
 
    /*sorting elements into descending order*/
    sort (integers, integers+integers_size, greater<int>() );
    cout << "Sorted array elements: " << "  ";
    for (int i = 0; i < integers_size; ++i)
        cout << integers[i] << " ";
}
 
 
int main ()
{
    int integers[10];
 
    /*getting user input*/
    cout << "Please enter the elements of an array" << endl;
 
    for (int i=0; i<10; i++)
    {
        cin >> integers[i];
    }
 
    print_array_statistics(integers, 10);
 
    return 0;
}
 
 

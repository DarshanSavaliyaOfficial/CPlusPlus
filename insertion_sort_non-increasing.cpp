/******************************************************************************
Author: Darshan Savaliya
GitHub Portfolio: DarshanSavaliyaOfficial

Name of the file: Insertion_sort_non_increasing
functions: main()
variables: array, iterator0, iterator1, buffer
*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>  //a composite library to add several algorithms

using namespace std;

int main()
{   
    /*
    Implement insertion sort algorithm and print the output of a non-increasing sorted array
    */
    int array[10],iterator0=0,buffer=0,iterator1=0;  
    for(iterator0=0;iterator0<10;iterator0++){
        array[iterator0] = rand()%10;  //add 10 random numbers to an array 
    }
    for(iterator0=1;iterator0<10;iterator0++){   //start from the second key of an array
        buffer = array[iterator0];    //store current value in m
        iterator1 = iterator0-1;
        while(iterator1+1){     //go through the previous numbers and
                                //insert current(buffer) value in the corresponding slot
            if(buffer>array[iterator1]){   
                array[iterator1+1]=array[iterator1];
                array[iterator1] = buffer;
            }
            iterator1--;
        }
    }
    for(iterator0=0;iterator0<10;iterator0++){  //print the final sorted array
        cout<<"//"<<array[iterator0];
    }
    
    return 0;
}

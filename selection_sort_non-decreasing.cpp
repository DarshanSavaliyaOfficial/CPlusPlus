/******************************************************************************

Author: Darshan Savaliya
GitHub Portfolio: DarshanSavaliyaOfficial

Name of the file: Insertion_sort_non_decreaasing
functions: main()
variables: array, iterator0, iterator1, buffer, iterator_value

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    Implement seletion sort algorithm and print the output of a non-decreasing sorted array
    */
    
    int array[10], iterator0, iterator1, buffer,iterator_value=0;
    
    for(iterator0=0;iterator0<10;iterator0++){  //generate 10 random numbers
        array[iterator0]=rand()%10;
    }
    cout<<"got all random numbers"<<endl;
    for(iterator0=0;iterator0<10;iterator0++){  //print initial array
        cout<<" "<<array[iterator0];
    }
    cout<<endl;
    
    for(iterator0=0;iterator0<10;iterator0++){
        buffer=array[iterator0];               //initialize buffer value
        for(iterator1=iterator0;iterator1<10;iterator1++){  //find the smallest value
                                                            //from the remaining array
            if(buffer>array[iterator1]){
                buffer = array[iterator1];     
                iterator_value=iterator1;
            }
        }
        array[iterator_value]=array[iterator0];    
        array[iterator0]=buffer;
    }
    for(iterator0=0;iterator0<10;iterator0++){
        cout<<" "<<array[iterator0];
    }
    
    return 0;
}

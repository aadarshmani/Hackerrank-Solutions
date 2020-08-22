#include<iostream>
#include<stdio.h>
using namespace std;

int largest_location( const int ar[], int arraylength ) // note: const
{
    // basic sanity checks
    if( ar == nullptr || arraylength == 0 ) return -1 ;

    int pos_largest_so_far = 0 ;
    for( int i = 0; i < arraylength; ++i ) if( ar[i] > ar[pos_largest_so_far] ) pos_largest_so_far = i ;

    return pos_largest_so_far ; // return the position
}
int main()
{
    int n,element,ar[6]={0,0,0,0,0,0};
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&element);
        if(element==1){
            ar[1]++;
        }
        else if(element==2){
            ar[2]++;
        }
        else if(element==3){
            ar[3]++;
        }
        else if(element==4){
            ar[4]++;
            }
        else {
            ar[5]++;
        }
    } 
     const int pos_largest = largest_location( ar, 6 );
    
    printf("%d",pos_largest);

    return 0;
}

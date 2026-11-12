#include <stdio.h>
int main(){
    int n,a,p=0,k=0,o,temp;

    // Building an array
    printf("Enter the number of products: ");
    scanf("%d",&n);
    int ware[n],odd[n/2],even[n/2];
    for (int i=0;i<n;i++){
        scanf("%d",&a);
        ware[i]=a;
    } 

    // Diving it into smaller arrays
    for (int j=0;j<n;j++){
        if (ware[j]%2==0){
            even[k]=ware[j]; //Sorting even elements in even array
            k++;
        }
        else{
            odd[p]=ware[j];  //Sorting odd elements in odd array
            p++;
        }
    }
    
    //Printing the arrays
    for (int u=0;u<k;u++){
        o = even[u];
        printf("%d ", o);
    }
    for (int z=0;z<p;z++){
        temp = odd[z];
        printf("%d ",temp);
    }
    return 0;
}
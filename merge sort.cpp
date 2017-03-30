#include<iostream>
void merge(int left[],int right[],int nL,int nR,int arr[]){
    int i=0,j=0,k=0;
    while(i<nL&&j<nR){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            k++;
            i++;
        }
        else{
            arr[k]=right[j];
            k++;
            j++;
        }
    }
    while(i<nL){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<nR){
        arr[k]=right[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int n){
    if(n<2)
        return;
    else{
        int mid=n/2;
        int left[mid],right[n-mid];
        int i=0;
        for(i=0;i<mid;i++)
            left[i]=arr[i];
        for(i=0;i<n-mid;i++)
            right[i]=arr[mid+i];
        mergeSort(left,mid);
        mergeSort(right,n-mid);
        merge(left,right,mid,n-mid,arr);
    }
}
int main(){
   int tcase;
   std::cin>>tcase;
   while(tcase--){
    long long numExams;
    std::cin>>numExams;
    int marks[numExams];
    long long i;
    for(i=0;i<numExams;i++)
       std::cin>>marks[i];
       std::cin.ignore(32767, '\n');
    mergeSort(marks,numExams);
    int minMarks=marks[0],maxMarks=marks[numExams-1];
    double gpa=0;
    for(i=0;i<numExams;i++)
        gpa=gpa+marks[i];
    gpa=(float)gpa/numExams;
    if((minMarks!=2)&&(maxMarks==5)&&(gpa>=4.0))
        std::cout<<"True\n";
    else
        std::cout<<"False\n";
    return 0;
   }

}


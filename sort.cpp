#include<iostream>
using namespace std;
class sort
{
int a[10],n;
public:
void read()
void inserts();
void merges();
void mergesort(
void quicks();
void quick_sort(int l,int u);
void partition(int l,int u);
};
sort::void inserts()
{
int size,i,j,temp;
cout<<"Enter Array Size : ";
	cin>>size;
	cout<<"Enter Array Elements : ";
	for(i=0; i<size; i++)
	{
		cin>>a[i];
	}
	cout<<"Sorting array using insertion sort ... \n";
	for(i=1; i<size; i++)
	{
		temp=a[i];
		j=i-1;
		while((temp<a[j]) && (j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	cout<<"Array after sorting : \n";
	for(i=0; i<size; i++)
	{
		cout<<a[i]<<" ";
	}

}
sort::void merges()
{
int low,high,mid;
		cout<<"Enter Array Size : ";
		cin>>size;
		cout<<"Enter Array Elements : ";
		for(i=0; i<size; i++)
		{
			cin>>a[i];
		}
int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
	
 
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}

	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}

sort::void quicks()
{

int n,i;
    cout<<"How many elements?";
    cin>>n;
    cout<<"\nEnter array elements:";
    
    for(i=0;i<n;i++)
        cin>>a[i];
        
    quick_sort(a,0,n-1);
    cout<<"\nArray after sorting:";
    
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;        
}
sort::void quick_sort(int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(l,u);
        quick_sort(l,j-1);
        quick_sort(j+1,u);
    }
}
 
sort::int partition(int l,int u)
{
    int v,i,j,temp;
    v=a[l];
    i=l;
    j=u+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<v&&i<=u);
        
        do
            j--;
        while(v<a[j]);
        
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }while(i<j);
    
    a[l]=a[j];
    a[j]=v;
    
    return(j);
}

int main()
{
int ch;
sort a;



cout<<"enter 1 to perform insertion sort\n,2 to perform merge sort\n,3 to perform quick sort\n,4 to exit the program\n";
cin<<ch;
switch(ch)
{
	case 1:
		cout<<"this is insertion sort section\n";
		a.inserts();
		break;
	case 2:
		cout<<"this is merge sort section\n";
		a.merges();
		break;
	case 3:
		cout<<"this is quick sort section\n";
		a.quicks();
		break;
	case 4:
		cout<<"you have successfully come out\n";
		exit(0);
		break;
	default:
		cout<<"sorry tou have entered a wrong choice\n";
}
}


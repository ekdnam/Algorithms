// Linear search
// A.particular.element.in.array

int main() {
    int n, key;
    cin >> n;

    int a[1000];
    for( int i=0; i<n; i++)
    {
     cin>>a[i];
    }

// Ask for the element we want to search
    
    cout << "Engter the element you want to search";
    cin >> Key;

// Find out the index of the element thatt you want to search
// Linear search algorithm

 for(int i=0;i<=n;i++)
 {
     if(a[i]==key)
     {
     cout << Key <<"found at"<< i <<"index";
     break;
     }
 }
 if(i==n){
     cout << Key << "is not present " << endl;
 }

 return 0;

}







}
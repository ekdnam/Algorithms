## 'Linear Search'
-### In computer science, a linear search or sequential search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.
     The worst case complexity of a Linear Search Algorithm is _O_(**N**).
     It is one of the basic algorithms in Computer Science.
-### Implementation-
     Linear_Search(int* arr,int n,int x){
	bool f=false;
	for(int i=0;i<n;i++){
	   if(a[i]==x){
		f=true;
	   }
        }
	return f;
}
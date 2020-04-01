 	
	int longestBitonicSubarray(int *in, int n) {
		
	int a[n]={0},b[n]={0};
    a[0]=1;
    b[n-1]=1;
        
    for(int i=1;i<n;i++){
        a[i]=1;
        for(int j=0;j<i;j++){
            if(in[j]<in[i]) a[i]=max(a[i],a[j]+1);
        }
    }
    for(int i=n-2;i>=0;i--){
        b[i]=1;
        for(int j=n-1;j>i;j--){
            if(in[j]<in[i]) b[i]=max(b[i],b[j]+1);
        }
    }	
        int co=0;
        for(int i=0;i<=n;i++){
            if(i==0) co=max(co,b[i]);
            else if(i==n) co=max(co,a[n-1]);
            else{
                co=max(co,a[i] + b[i] - 1);
            }
        }
     	
     return co;	
 	}



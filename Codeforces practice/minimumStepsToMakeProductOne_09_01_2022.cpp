        int total=0,negcount=0,zerocount=0;
        for(int i=0;i<n;i++){<br>
            if(arr[i]>0 && arr[i]!=1){
                total+=arr[i]-1;
            }
            else if(arr[i]==0){
                total++;
                zerocount++;
            }
            else if(arr[i]<0){
                total+=abs(arr[i]);
                negcount++;
            }
        }
        total-=negcount;
        if(negcount%2!=0 && zerocount==0){
            total+=2;
        }
        return total;
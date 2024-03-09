bool isValid(string s) {
       int length=s.length();
       if(length%2!=0){
           return false;
       }
       else{
           for(int i=1;i<length;i++){
             if(s[i]!=s[i-1]){
                 return false;
             }
             
           }
       }
       return true;
    }
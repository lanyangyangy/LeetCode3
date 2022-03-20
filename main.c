int lengthOfLongestSubstring(char * s){
    char* a=s+1;
    char* b=s;
    int n=0;
    int i=0;
if(strlen(s)==0){
return 0;
    }
    else
    {
        n=1;
   while(a<s+strlen(s))
    {

      for(i=0;i<a-b;i++)
        {
            if(*(b+i)==*a)
            {
                if(n<a-b) n=a-b;
                b+=i+1;
              
              i=a-b+1;
            }
        }
        if(a==s+strlen(s)-1&&n<a-b+1)
        {
          n=a-b+1;
        }
        a++;
    }
    return n;                   
    }
 
}

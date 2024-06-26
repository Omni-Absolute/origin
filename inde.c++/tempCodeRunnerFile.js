console.log("i have come")
var s = "abcbabab"

function palindrom(s,i,j){
   if(j>i){
     if(s[i]==s[j]){
       palindrom(s,i+1,j-1)
        
      
    }
  
    
    else{
        
        palindrom(s,i+1,j)
        
   }
     console.log(s.substring(i,j+1))

   }
}
palindrom(s,0,s.length-1)
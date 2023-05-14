class Solution { 
public: 
     
    int addMinimum(string s) { 
        int i = 0; 
        char currentChar = 'a'; 
        int changesNeeded = 0; 
        
        while(i < s.size()){ 
             
            if(s[i] == currentChar){ 
                i++; 
            } 
            else{ 
                changesNeeded++; 
            } 
            
            currentChar = (currentChar == 'a') ? 'b' : 
                          (currentChar == 'b') ? 'c' : 'a'; 
        } 
        
        if(s[s.size()-1] == 'a') changesNeeded += 2; 
        else if(s[s.size()-1] == 'b') changesNeeded++; 
        
        return changesNeeded; 
    } 
};

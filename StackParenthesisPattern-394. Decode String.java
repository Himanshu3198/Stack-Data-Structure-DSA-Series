class Solution {

    private boolean isDigit(char c){
        return c>='0' && c<='9';
    }
    public String decodeString(String s) {
        
        Stack<Integer>digitSt = new Stack<>() ;
        Stack<String>wordSt = new Stack<>();

        String curr = "";
        int digit = 0;

        for(char ch:s.toCharArray()){

            if(isDigit(ch)){
                digit = digit*10 + (ch-'0');
            }else if(ch == '['){
                digitSt.push(digit);
                digit = 0;
                wordSt.push(curr);
                curr =  "";

            }else if(ch == ']'){
                   
                   int repCount = digitSt.pop();
                   String repWord = wordSt.pop();

                   StringBuilder temp = new StringBuilder();
                   for(int i =0;i<repCount;i++){
                        temp.append(curr);
                   }

                   curr = repWord+temp.toString();

            }else{
                curr +=ch;
            }

        }

        return curr;
    }
}

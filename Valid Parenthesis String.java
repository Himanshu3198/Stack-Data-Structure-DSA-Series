class Solution {
    public boolean checkValidString(String s) {
        int n = s.length();
        Stack<Integer> open = new Stack<>();
        Stack<Integer> star = new Stack<>();
        
        for(int i=0;i<n;i++){
            if(s.charAt(i) == '('){
                open.push(i);
                continue;
            }else if(s.charAt(i) == '*'){
                star.push(i);
                continue;
            }

            if(!open.isEmpty()){
                open.pop();
            }else if(!star.isEmpty()){
                star.pop();
            }else{
                return false;
            }
            
        }
        while(!open.isEmpty() && !star.isEmpty() && open.peek() < star.peek()){
            star.pop();
            open.pop();
        }
        return open.size() == 0;
    }
}

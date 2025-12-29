int n = s.length();
        Map<Character,Integer> freq = new HashMap<>();
        Stack<Character> st = new Stack<>();
        Set<Character> seen = new HashSet<>();

        for(int i=0;i<n;i++){
            freq.put(s.charAt(i),freq.getOrDefault(s.charAt(i),0)+1);
        }

        for(int i=0;i<n;i++){
            
            char c = s.charAt(i);
            freq.put(c,freq.getOrDefault(c,0)-1);
                if(freq.get(c) < 0) 
                   freq.remove(c);
            if(seen.contains(c)) continue;

            while(!st.isEmpty() && c < st.peek() && freq.getOrDefault(st.peek(),0)>0){
                char currC = st.pop();
                seen.remove(currC);
            }
            st.push(c);
            seen.add(c);
        }

        StringBuilder res = new StringBuilder();
        while(!st.isEmpty()){
            res.append(st.pop());
        }

        return res.reverse().toString();


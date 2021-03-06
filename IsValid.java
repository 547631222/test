class IsValid {
    public boolean isValid(String s) {
        Stack<Character> stack=new Stack<>();
        for(char x:s.toCharArray()){
            if(x=='('||x=='['||x=='{'){
                stack.push(x);
            }else if(stack.isEmpty()){
                return false;
            }else if((x==')'&&stack.peek()=='(')||(x==']'&&stack.peek()=='[')||(x=='}'&&stack.peek()=='{')){
                stack.pop();
            }else{
                return false;
            }
        }
        if(stack.isEmpty()){
            return true;
        }
        return false;
    }
}
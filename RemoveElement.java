class RemoveElement {
    public int removeElement(int[] nums, int val) {
        int flag=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=val){
                nums[flag++]=nums[i];
            }
        }
        return flag;
    }
}
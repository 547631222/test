class ListNode{
    public int data;
    public ListNode next;

    public ListNode(int data) {
        this.data = data;
        this.next=null;
    }
}
public class Clear{
    public void clear(){
        //һ��һ����Ϊ��
        while(this.head!=null){
            ListNode cur=this.head.next;
            this.head.next=null;
            this.head=cur;
        }
        //this.head=null;

    }
}
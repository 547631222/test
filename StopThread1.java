public class StopThread1 {
    private static class Worker extends Thread{
        Worker(){
            super("李四");
        }
        @Override
        public void run() {
            while(!this.isInterrupted()){
                System.out.println(this.getName()+"我正在转账，别烦我");
                try {
                    Thread.sleep(3000);
                } catch (InterruptedException e) {
                    System.out.println("我从睡梦中惊醒");
                    break;
                }
            }
        }
    }
    public static void main(String[] args) throws InterruptedException {
        Worker worker=new Worker();
        worker.start();
        System.out.println("我是张三，正在等李四转账");
        Thread.sleep(10*1000);
        System.out.println("打听到对方是骗子，停止转账");
        worker.interrupt();
        System.out.println("通知李四完毕");
        worker.join();
        System.out.println("李四停止转账");
    }
}

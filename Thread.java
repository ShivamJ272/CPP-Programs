class printdelay extends Thread{
	public void run() {
		for(int i =1; i<=100; i++) {
			try{
				Thread.sleep(2000);
				System.out.println("printing "+i);
				
			} catch(InterruptedException e) {
				System.out.println(e);
			}
		}
	}
}

public class Thread {

	public static void main(String[] args) {
		new printdelay().start();
		

	}

}

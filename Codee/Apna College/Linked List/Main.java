class Node {
    int val;
    Node next;

    Node(int val) {
        this.val = val;
        this.next = null;
    }
}

class List {
    private Node head;
    private Node tail;

    public List() {
        head = null;
        tail = null;
    }

    public void push_front(int val) {
        Node newNode = new Node(val);
        if (head == null) {
            head = tail = newNode;
        } else {
            newNode.next = head;
            head = newNode;
        }
    }
}

public class Main {
    public static void main(String[] args) {
        List ll = new List();
        ll.push_front(1);
        ll.push_front(2);
        ll.push_front(3);
    }
}

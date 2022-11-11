#include <cstdio>
#include <string>
using namespace std;

const int N = 1e5 + 10;

typedef struct ListNode {
	int data;
	ListNode* next;
	ListNode* prior;
}Node, * PNode;

class MyList {
private:
	PNode head, tail;
	int cnt = 0;

public:
	MyList();

	int size();

	void push_back(int x);

	void traverse();

	PNode get_addr(int x);
	
	void add_to_left(int x, int y);
	void add_to_right(int x, int y);

	void del(int x);
};

MyList lst;
int n, cnt;

PNode ADDR[N]; // 存储每一个数的地址

int main() {

	/*lst.push_back(1);
	cout << ADDR[1] << endl;*/
	cin >> n;
	lst.push_back(1);
	
	for (int i = 2; i <= n; i++) {
		int num, flag;
		cin >> num >> flag;
		if (flag && ADDR[num]) lst.add_to_right(num, i);
		else if(ADDR[num]) lst.add_to_left(num, i);
	}

	cin >> cnt;
	while(cnt--) {
		int x;
		cin >> x;

		if(ADDR[x]) lst.del(x);
	}

	lst.traverse();

	return 0;
}

MyList::MyList() {
	head = new Node;
	tail = new Node;
	head->next = tail;
	tail->prior = head;
	cnt = 0;
}

int MyList::size() {
	return cnt;
}


void MyList::push_back(int x) {
	cnt++;
	PNode s = new Node;
	PNode q = tail->prior;

	s->data = x;

	s->next = tail;
	q->next = s;
	tail->prior = s;
	s->prior = q;

	ADDR[x] = s;
}


void MyList::traverse() {
	PNode p = head->next;
	while (p != tail) {
		cout << p->data << " ";
		p = p->next;
	}
	puts("");
}

PNode MyList::get_addr(int x) {
	//PNode p = head->next;
	//while (p != tail) {
	//	//cout << p->data << " ";
	//	if (p->data == x)
	//		return p;
	//	p = p->next;
	//}

	//return NULL;
	return ADDR[x];
}

void MyList::add_to_left(int x, int y) {
	cnt++;
	auto current_addr = get_addr(x);
	auto prior_addr = current_addr->prior;
	auto p = new Node;
	p->data = y;
	prior_addr->next = p;
	p->prior = prior_addr;
	p->next = current_addr;
	current_addr->prior = p;

	ADDR[y] = p;
}

void MyList::add_to_right(int x, int y) {
	cnt++;
	auto current_addr = get_addr(x);
	auto next_addr = current_addr->next;
	auto p = new Node;
	p->data = y;
	current_addr->next = p;
	p->prior = current_addr;
	p->next = next_addr;
	next_addr->prior = p;

	ADDR[y] = p;
}

void MyList::del(int x) {
	
	
	auto current_addr = get_addr(x);
	if (!current_addr) return;
	ADDR[x] = NULL;
	auto prior_addr = current_addr->prior;
	auto next_addr = current_addr->next;

	prior_addr->next = next_addr;
	next_addr->prior = prior_addr;
	delete current_addr;

	cnt--;
}

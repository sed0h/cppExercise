#include <iostream>
#include <string>
#include <windows.h>
#include <thread>

struct ListItem {
	volatile uint32_t item_value;
	struct ListItem* volatile next;
	struct ListItem* volatile previous;
	void* owner;	 			//point to the object (normally a TCB) that contains the list item.
	void* volatile container;	//point to which this list item is placed
};
typedef struct ListItem ListItem_t;

struct MINIListItem {
	volatile uint32_t item_value;
	struct ListItem* next;
	struct ListItem* previous;
};
typedef struct MINIListItem MINIListItem_t;

typedef  struct  LIST {
	volatile uint32_t number_of_items;
	ListItem* volatile index;		//Used to walk through the list
	MINIListItem_t list_end;
} List_t;
void InsertItem(List_t* const pxList, ListItem_t* const pxNewListItem);
void InitialiseList(List_t* const list);
void loop();

int last_main() {
	union MyUnion
	{
		char* buf;
		char array[3];
	};

		char list[3] = { 'a', 'B', 'c' };
	MyUnion myU = {
		 list
	};
	//printf("buf[0]: %c, buf[1]: %c, buf[2]: %c, buf[3]: %c", myU.buf[0], myU.buf[1], myU.buf[2], myU.buf[3]);

	//char uds_pdu[10] = { 0 };
	//free(uds_pdu);

	//char* p = new char[5];
	//strcpy(p, "aaaaa");
	//delete[] p;
	
	/**test strlen and sizeof**/
	//char lst[3] = "aB";
	//char lt[4] = "aBc";
	//printf("strlen(lst)=%d, sizeof(lst)=%d\n", strlen(lst), sizeof(lst));
	//printf("strlen(lt)=%d, sizeof(lt)=%d", strlen(lt), sizeof(lt));

	/** test string**/
	//using namespace std; //this must be here for class string valid use
	//string str1;
	//string str2 = "panther";


	List_t lst;
	ListItem_t list_item0, list_item1, list_item2;
	
	//list_item0.next = &list_item1;
	//list_item1.previous = &list_item0;
	//list_item1.next = &list_item2;
	//list_item2.previous = &list_item1;

	InitialiseList(&lst);
	list_item1.container = nullptr;
	list_item1.item_value = 5;	

	
	InsertItem(&lst, &list_item1);

	std::thread *t = new std::thread(loop);

	while (true) {
		printf("Auto - reload timer callback execut Auto-reload timer callback execut\n");
		Sleep(500);
	}

	t->join();
	return 0;
}

void loop() {
	while (1) {
		printf("dsafdsjaonvfo\n");
	}
}
typedef uint32_t TickType_t;
#define portMAX_DELAY ( uint32_t ) 0xffffffffUL

void InsertItem(List_t* const pxList, ListItem_t* const pxNewListItem) {
	ListItem_t* px_iterator;
	const TickType_t value_of_insertion = pxNewListItem->item_value;

	if (value_of_insertion == portMAX_DELAY) {
		px_iterator = pxList->list_end.previous;
	}
	else {
		for (px_iterator = (ListItem_t*)&(pxList->list_end); value_of_insertion > (px_iterator->next->item_value); px_iterator = px_iterator->next) {

		}
	}

	pxNewListItem->previous = px_iterator;
	pxNewListItem->next = px_iterator->next;
	pxNewListItem->next->previous = pxNewListItem;
	px_iterator->next = pxNewListItem;

	//pxNewListItem->next = px_iterator->next;
	//pxNewListItem->next->previous = pxNewListItem;
	//pxNewListItem->previous = px_iterator;
	//px_iterator->next = pxNewListItem;
	//同一线的操作完成后再另一条线，不是同一个节点操作完之后再另一个节点

	pxNewListItem->container = (void*)pxList;

	(pxList->number_of_items)++;
}

void InitialiseList(List_t* const list) {
	list->index = (ListItem_t*)&(list->list_end);

	list->list_end.item_value = portMAX_DELAY;

	list->list_end.previous = (ListItem_t*)&(list->list_end);
	list->list_end.next = (ListItem_t*)&(list->list_end);

	list->number_of_items = 0;
}
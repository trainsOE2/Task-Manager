#include <bits/stdc++.h>
using namespace std;

class Task{

  public:
    int id;
    string name;
    bool status;

  Task(int id, string name){
    this->id = id;
    this->name = name;
    this->status = false;
  }

};

int main() {
  vector<Task*> todo;
  int option;
  string name, status;
  while(true){
    cout << "\n\n1. Create a task\n2. List all tasks\n3. Mark all tasks\n4. Mark particular task(s)\n5. Exit\n\nEnter Option: ";
    cin >> option;
    if (option == 5)
      return 0;
    switch(option){
      case 1: cout << "\nEnter task name: ";
              cin >> name;
              todo.push_back(new Task(todo.size()+1, name));
              break;

      case 2: cout << "\nTo Do...\n\nID\tName\t\tStatus\n------------------------------------\n";
              for ( Task* task : todo){
                status = (task->status) ? "Done" : "Pending";
                cout << task->id << '\t' << task->name << "\t\t" << status<<endl;
              }
              break;
      case 3: for ( Task* task : todo){
                cout << task->id << '\t' << task->name << "\t\t";
                cin >> status;
                task->status = (status=="Done") ? true : false;
              }
              break;
      case 4:  cout<< "Enter task id: ";
                int id;
                cin >> id;
                cout << todo[id-1]->id << '\t' << todo[id-1]->name << "\t\t";
                cin >> status;
                todo[id-1]->status = (status=="Done") ? true : false;

              break;

    }
  }
  return 0;
}

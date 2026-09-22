#include <iostream>
using namespace std;

class Playlist {
    struct Node {
        string song;
        Node* prev;
        Node* next;
    };

    Node* head;

public:
    Playlist() {
        head = NULL;
    }

    void addBeginning(string song) {
        Node* newNode = new Node;
        newNode->song = song;
        newNode->prev = NULL;
        newNode->next = head;

        if (head != NULL)
            head->prev = newNode;

        head = newNode;
        display();
    }

    void addEnd(string song) {
        Node* newNode = new Node;
        newNode->song = song;
        newNode->next = NULL;

        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
        } else {
            Node* temp = head;

            while (temp->next != NULL)
                temp = temp->next;

            temp->next = newNode;
            newNode->prev = temp;
        }

        display();
    }

    void insertAfter(string givenSong, string newSong) {
        Node* temp = head;

        while (temp != NULL && temp->song != givenSong)
            temp = temp->next;

        if (temp == NULL) {
            cout << "Song not found\n";
            return;
        }

        Node* newNode = new Node;
        newNode->song = newSong;

        newNode->next = temp->next;
        newNode->prev = temp;

        if (temp->next != NULL)
            temp->next->prev = newNode;

        temp->next = newNode;

        display();
    }

    void removeFirst() {
        if (head == NULL) {
            cout << "Playlist is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != NULL)
            head->prev = NULL;

        delete temp;

        display();
    }

    void countSongs() {
        int count = 0;
        Node* temp = head;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        cout << "Number of songs: " << count << endl;
    }

    void display() {
        Node* temp = head;

        cout << "Playlist: ";

        while (temp != NULL) {
            cout << temp->song << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    Playlist p;

    p.addBeginning("song1");
    p.addEnd("song2");
    p.addEnd("song3");
    p.insertAfter("song2", "song4");
    p.countSongs();
    p.removeFirst();
    p.countSongs();
}
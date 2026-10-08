#include <queue>
#include <dequeue>
dequeue<string> persons;

persons.push('Arun');
persons.push('Deva');
persons.push('Dharun');
persons.push('Guru');
persons.push('Hari');
persons.push("Dn");

for(string person : persons){
    if(person == person[0]){
        cout<< "First person added. and waiting";
    }
    else if (person == person[1]){
        cout<< "Second person added. and waiting";
    }
    else if (person == person[2]){
        cout<< "Third person added. and waiting";
    }
    else if (person == person[3]){
        cout<< "Fourth person added. and waiting";
    }
    else if (person == person[4]){
        cout<< "Fifth person added. and waiting";
    }
    else{
        cout<< "Queue if full, Only Five persons are allowed.";
    }
}



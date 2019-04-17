int RedLeD = D6; 
int GreenLeD = D4;
int BlueLeD = D5; 
int ledToggle(String command);

void setup()
{
  Serial.begin();
  pinMode(RedLeD, OUTPUT);
  pinMode(GreenLeD, OUTPUT);
  pinMode(BlueLeD, OUTPUT);
  // register the cloud function
  Particle.function("led", ledToggle);
  
  digitalWrite(RedLeD, LOW);
  digitalWrite(GreenLeD, LOW);
  digitalWrite(BlueLeD, LOW);
  
}

void loop()
{
  // this loops forever
}

// this function automagically gets called upon a matching POST request
int ledToggle(String command)
{
 if (command == "onred")
    {
        digitalWrite(RedLeD, HIGH);
        digitalWrite(GreenLeD, LOW);
        digitalWrite(BlueLeD, LOW);
        return 1;
    }
    else if (command == "offred")
    {
        digitalWrite(RedLeD, LOW);
        digitalWrite(GreenLeD, LOW);
        digitalWrite(BlueLeD, LOW);
        return 0;
    }
    
    if (command == "ongreen")
    {
        digitalWrite(GreenLeD, HIGH);
        digitalWrite(RedLeD, LOW);
        digitalWrite(BlueLeD, LOW);
        return 1;
    }
    else if (command == "offgreen")
    {
        digitalWrite(RedLeD, LOW);
        digitalWrite(GreenLeD, LOW);
        digitalWrite(BlueLeD, LOW);
        return 0;
    }
if (command == "onblue")
    {
        digitalWrite(BlueLeD, HIGH);
        digitalWrite(RedLeD, LOW);
        digitalWrite(GreenLeD, LOW);
        
        return 1;
    }
    else if (command == "offblue")
    {
        digitalWrite(RedLeD, LOW);
        digitalWrite(GreenLeD, LOW);
        digitalWrite(BlueLeD, LOW);
        return 0;
    }

    else
    {
        return -1;
    }
}


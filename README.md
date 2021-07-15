# BikeProject
A small ardunio script for a group math project in Junior yr. Highschool math class.

Premise: A person is riding a bike in a long race. With no direct speedometers, how can that 
person ensure that the bike will be traveling at exactly 20mph? (Any faster and the person 
will get tired, any slower and they will lose)

Essentially this was a geometry problem and a bit of real world maths. My teacher
(Mr. Chivers) wanted the students to devise strategies and compete so that the class could
decide on the best strategy for the bike racer to achieve this goal. Since other teams
were allowed electronic tools (such as stopwatches, timers, music players) in their
strategies, I built an arduino circuit with a few sensors and an LED for this task.

The front wheel rim was affixed with a piece of non-reflective tape and a photoresistor is taped from
the fork to the photoresistor to detect each rotation of the wheel.

This circuit was accompanied by the following code
(Had to debounce the tape passing to be able to detect speed)

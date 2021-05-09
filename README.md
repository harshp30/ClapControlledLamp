# Clap_Light_Arduino

January 2020

Tutorial by: https://www.instructables.com/Turn-on-and-Off-a-Lamp-Clapping-Twice-Using-Arduin/ 

Youtube Demonstration: https://youtu.be/LlXZIP_lnOM

Pictures Link: https://drive.google.com/drive/folders/1XYnzSCiZKlhlMcc99XwAgozUeIAGaL_I?usp=sharing

A project that originally started off with a led, and later integrated with a lamp. The system works like a clap-lamp. The user claps twice (200 milliseconds apart) and a microphone sensor (DAOKI) then reads those values and sends them to the Arduino. The Arduino then sends that signal to a relay (TE213) that controls the led/lamp. Installing the system into a lamp came with some minor challenges such as creating one seamless piece, instead of the lamp and Arduino completely separated. To fix this issue I pushed everything into the lamp base and placed the lamp on a plastic container that I cut small slits into for the microphone sound sensor and the Arduino power cable.

Challenges:

For this project, the tougher part was the hardware. Arranging everything into the base of the lamp was a bit challenging. The software also had a few challenges, one of them is having to create a time delay between the two claps to make sure no random sounds turn on the lamp.

Lessons:

This was a great software-hardware project that let me work with relays and also allowed me to apply a project to a pre-existing object (in this case the lamp). It makes it a bit trickier to make a project around something physical rather than from scratch.

Possible Improvements:

Two ways I could have improved the lamp is by making the system more portable for the ease of moving it and concealing some sort of coating around the lamp to make the hardware less visible.


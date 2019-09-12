# Internet of Things and Security

The world is suddenly integrated. The devices we rely on for daily life are all now connected to the internet.  This does not just include phones, computers, and tablets, but it also include any kind of household appliance you can think of including: lights, toilets, routers, TVs, refrigerators, toasters, coffee makers, pacemakers, medical devices, children, cars, and many more.  The question that this: what happens when the cybersecurity of these devices is neglected?

## The Device (Internet Enabled Light-bulb)

The device you see before you is a basic internet light-bulb.  It operates similarly  to other IoT light-bulbs, with a minor exception: there are three bulbs for each of our three groups.  Also, the LED won’t light a room, but from a WiFi and security standpoint, bulbs like this have been release to the public.  Your goal is to hack it.

Connected to this bulb is an App that allows a user to turn and off the bulb (just like commercially available IoT bulbs).  Your goal is to identify how the App turns on the bulb without access to the App.  Then steal control of the bulb from the App.  Remember, it is controlled via WiFi.

## Step One: Packet Snooping

Using the Raspberry PI, open an application called “Wireshark”. This application is used by many different people to see what kind of traffic is on the internet around them. Specifically, it allows you to read packets (data sent about the internet) bound for your computer and everyone else on your network.  This theoretically means you could see the Tweet the guy at the coffee shop is making. Remember, using a computer to do something you do not have permission to do is a Felony.  Run Wireshark by finding the icon in the programs menu (look for a blue fin) or opening a terminal and typing `wireshark`.

Using Wireshark we can take a look at the traffic between the App and the bulb.  To do this, start a packet capture using the blue fin button.  This will capture all traffic on the network.  Fortunately, it is very quiet, so you should just see the app and the bulb.  Look around through the packets for anything suspicious.  Once you see something suspicious, watch the bulb, and see if you can guess how it works.

**Note:** if this proves troublesome, add a filter to the filter box at the top. `proto.http` should reduce the traffic to only http requests.  Since http requests are generally how IoT devices are controlled, you likely only need these.

**Note:** when in doubt, ask a mentor for help.


## Step Two: Assuming Control

By now you should have a guess on how the bulb turns on and off.  Next try editing your own control messages to control the bulb. This can be most easily done on the PI itself. Looking at the type of data used for control, you should have some idea how to use that data on your own.  If in doubt, ask a mentor for help.


To put the icing on the cake, I’d be nice to control the bulb from your phone.  In order to do that you need to first connect to the IoT device’s network.  To do this, scan WiFi with your phone, and look for a suspicious WiFi.  Try your best to connect.  Then, using your phone, take control!!


## Step Three: Profit

This was fairly easy for you to do right?  Most IoT devices are no more secure that this bulb project.  Others use a WiFi password, but it is defaulted and you can get the code from a quick Google search.  From this you should see the importance of security in this new realm.  After all, you don’t want some hacker taking control of your pacemaker, or toilet while you are using them.

When using these devices in your life, change the default password always, ensure to install all updates and firmware patches, and under the security risk to reward balance.  For a light-bulb, it probably doesn’t matter if someone can turn it on and off as it is at most an annoyance, but when your pacemaker or car are concerned the internet may be left unconnected.



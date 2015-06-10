================================================================================
    GoF CommandPattern
===============================================================================

The GOF Command Pattern falls under the Behavioural grouping. 
This group of patterns describes mechanisms of communication between classes and objects. 
In this case, it is an object used to express a request. 
It holds the necessary information and has a common mechanism to execute


/////////////////////////////////////////////////////////////////////////////


================================================================================
    CQRS CommandPattern
===============================================================================

It differs in that a CQRS command is a message. 
It represents an action. 
It cannot be executed. 
Rather we route it to a handler. 
Messages in a CQRS system are also immutable. 
This immutability and the fact we route commands gives this pattern it’s power and flexibility.

We can send a command over the wire. 
We can queue them and even re-route them. 
Commands are generally made up of simple types. 
As such they are easy to serialise and log. 
There are no dependencies to worry about.

/////////////////////////////////////////////////////////////////////////////

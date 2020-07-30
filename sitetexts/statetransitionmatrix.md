# State transition matrix
This [script](https://nbviewer.jupyter.org/github/chrisrijsdijk/RAMS/blob/master/StateTransitionMatrix.ipynb) illustrates the concept of the Markov property, i.e. only the current state of the system determines what happens the next step ahead. This script departs from a time series representing the evolution of the state of a system. In its most simple scenario, the system is just up or down, but the script is easily extendable to multiple state systems. The script provides various sample time series to illustrate some practical issues.

The script illustrates the construction of the state transition matrix from a time series of system states. The rows in this state transition matrix represent the current state and the columns represent the next step ahead state. Below is the state transition matrix of a 4-state system. Each row in the state transition matrix should sum up to one.

|             | up/up     | up/down   | down/up | down/down  |
|:-----------:|----------:|----------:|--------:|-----------:|
|up/up        |    0.50   |    0.33   |   0.17  |   0.00     |
|up/down      |    0.25   |    0.25   |   0.00  |   0.50     |
|down/up      |    0.50   |    0.00   |   0.25  |   0.25     |
|down/down    |    0.00   |    0.33   |   0.67  |   0.00     |

Particularly in case of multiple state systems, it is often impossible to construct a state transition matrix from a time series of observations. Failures typically (and hopefully!) rarely occur and some system states may therefore remain absent in the time series. Then, the state transition matrix cannot be constructed from a time series of observations. Then, expert judgement is needed to load the state transition matrix. Reliability handbooks may be helpful here.

![image](/figures/StateTransitionPlot01.png).

The main output of this script is a graph that plots the probability of an upstate of the system. In case of multiple state systems, a definition of the system's upstate needs to be specified. In this picture, both components should be up for the system to be up or just one of the two components should be up for the system to be up. So, the effect of various configurations on the probability of the upstate may be evaluated.

![image](/figures/StateTransitionPlot02.png).

Both pictures have been built on the same time series, but in the first picture this time series has been decomposed in 10 steps and in the second one, it has been decomposed in 60 steps. Then, the number of state transitions in the time series did not change, but the number of state holdings grows by a factor 6 as shown in the state transition matrix below.

|             | up/up     | up/down   | down/up | down/down  |
|:-----------:|----------:|----------:|--------:|-----------:|
|up/up        |    0.93   |    0.05   |   0.17  |   0.00     |
|up/down      |    0.04   |    0.88   |   0.00  |   0.08     |
|down/up      |    0.08   |    0.00   |   0.88  |   0.04     |
|down/down    |    0.00   |    0.06   |   0.11  |   0.83     |

Although both graphs end at similar probabilities of an upstate, the resolution of the second graph is more accurate. This idea can be stretched to a decomposition into infinitely many time intervals. If the number of system states is small, an equation for the evolution of the probability of the upstate can be derived.

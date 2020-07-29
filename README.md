# About the repository
This repository contains some very simple scripts supporting an introductory course on Reliability, Availability, Maintainability and Supportability (RAMS). A survey of these scripts and their input files can be found [here](https://nbviewer.jupyter.org/github/chrisrijsdijk/RAMS/).

# Homogenous Poisson process
This [script](https://nbviewer.jupyter.org/github/chrisrijsdijk/RAMS/blob/master/PoissonDistribution.ipynb) may be interesting to operating organisations that only have Computerised Maintenance Management System (CMMS) data available. CMMS data is typically event data that has been entered by human beings and it is therefore prone to humans factors. This [paper](https://www.phmpapers.org/index.php/phme/article/view/409) provides a realistic application of this script while outlining that this basic analysis may be enriched with sensor data.
![cover image](/figures/PoissonPlot01.png)
The main output of this script is a graph that plots the "observed arrivals" in red. The maximum likelihood Poisson parameter linearly evolves in time and in this specific case, the evolution of the "observed arrivals" is within the 95% acceptance region. In this way, an initial screening on large discontinuities in the "observed arrivals" will be obtained. 

A homogenous Poisson process presumes a constant arrival rate which typically does not apply to many job requests in a CMMMS. For example, many job requests are subject to scheduling and even failure notifications often deferrable to a "convenient" time. Also the definition of the time bracket in which these arrivals took place may require some adjustment of the script.

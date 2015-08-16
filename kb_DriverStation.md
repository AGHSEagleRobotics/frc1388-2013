# Introduction #

This Wiki lists known problems and solutions associated with software running on the Driver Station computer, and any other computers connected to the cRIO network.

| Table of Contents:  |
|:--------------------|

# Multiple instances of Driver Station and/or dashboards #

There must be one instance of the Driver Station software connected to the cRIO.  If there is no Driver Station running, you won't be able to control the cRIO / robot.  If there are more than one instance of the Driver Station running on computers connected to the cRIO - whether on the same computer or different computers - you will have unpredictable results at best, and likely things will not work as expected.

There must be no more than one dashboard application running on the computers connected to the cRIO.  This includes all types of dashboard applications, whether it's the LabVIEW dashboard, SmartDashboard, or any other dashboard application.  There is no requirement to have a dashboard application running.  However, if you have more than one dashboard running, the cRIO will experience network connection errors, which usually have an impact on network stability and robot software performance.
# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |read from file|  File pointer| SUCCESS|SUCCESS|Technical |
|  H_02       |If file empty Add valid employee details|Employee name and unique id|SUCCESS|SUCCESS|Technical   |
|  H_03       |Display details properly.|countofrecords pointer should be provided.|Display all details properly|SUCCESS|Requirement|
|  H_04       |Search details of employee|Employee id |Display details of particular employee id|Not found|Technical|
|  H_05       |Sort the details|File storing all records|Display records after sorting|SUCCESS|Technical|
|  H_06       |Write all records to file|Successful|Successful|Technical|


## Table no: Low level test plan

| **Test ID** |**Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Check whether file is opened|  File pointer |SUCCESS|SUCCESS |Technical |
|  L_02       |If file empty enter employee details|  Employee name and id |SUCCESS|SUCCESS |Technical |
|  L_03       |Display records|  Choice 2  |SUCCESS|SUCCESS|Technical |
|  L_04       |Update records(id not found)| Enter id |File not found|Exit|Technical |
|  L_05       |Update record(id found)|Enter id|SUCCESS|SUCCESS|Technical |





## Automated ELK Stack Deployment

The files in this repository were used to configure the network depicted below.

![TODO: Update the path with the name of your diagram](Images/diagram_filename.png)

These files have been tested and used to generate a live ELK deployment on Azure. They can be used to either recreate the entire deployment pictured above. Alternatively, select portions of the _____ file may be used to install only certain pieces of it, such as Filebeat.

  - _TODO: Enter the playbook file._

This document contains the following details:
- Description of the Topology
- Access Policies
- ELK Configuration
  - Beats in Use
  - Machines Being Monitored
- How to Use the Ansible Build


### Description of the Topology

The main purpose of this network is to expose a load-balanced and monitored instance of DVWA, the D*mn Vulnerable Web Application.

Load balancing ensures that the application will be highly efficient, in addition to restricting DDoS Attacks to the network.

 
### What aspect of security do load balancers protect?

A load balancer can add additional layers of security to your website without any changes to your application.
It can also protect applications from emerging threats. The Web Application Firewall (WAF) in the load balancer 
protects your website from hackers and includes daily rule updates just like a virus scanner. A load balancer can 
authenticate user access by requesting a username and password before granting access to your website to protect 
against unauthorized access. Load balancers can protect against DDoS attacks because a load balancer can detect and 
drop distributed denial-of-service (DDoS) traffic before it gets to your website. And lastly, a load balancer can 
simplify PCI compliance for companies that procees credit card transactions.
 
### What is the advantage of a jump box?
 
A jump box is a secure computer that all administrators first connect to before launching any administrative task or use 
as an origination point to connect to other servers or untrusted environments.

### Integrating an ELK server allows users to easily monitor the vulnerable VMs for changes to the logs and system traffic.

### What does Filebeat watch for?

Filebeat is a lightweight shipper for forwarding and centralizing log data. Installed as an agent on your servers, Filebeat 
monitors the log files or locations that you specify, collects log events, and forwards them either to Elasticsearch or Logstash 
for indexing.

### What does Metricbeat record?

Metricbeat is a lightweight shipper that you can install on your servers to periodically collect metrics from the operating system 
and from services running on the server. Metricbeat takes the metrics and statistics that it collects and ships them to the output 
that you specify, such as Elasticsearch or Logstash.

###The configuration details of each machine may be found below.
_Note: Use the [Markdown Table Generator](http://www.tablesgenerator.com/markdown_tables) to add/remove values from the table_.

| Name     | Function | IP Address | Operating System |
|----------|----------|------------|------------------|
| Jump Box | Gateway  | 10.0.0.1   | Linux            |
| Web-1    | Server   | 10.0.0.13  | Linux            |
| Web-2    | Server   | 10.0.0.14  | Linux            |
| Web-3    | Server   | 10.0.0.4   | Linux            |
| Elk-Stack| Server   | 10.1.0.4   | Linux            |


### Access Policies

The machines on the internal network are not exposed to the public Internet. 

Only the Jump Box machine can accept connections from the Internet. Access to this machine is only allowed from the following IP addresses:
136.49.88.9

Machines within the network can only be accessed by SSH.

### Which machine did you allow to access your ELK VM?

I allowed my Jump Box machine to access my Elk Stack VM.
 
### What was its IP address?

10.0.0.15


### A summary of the access policies in place can be found in the table below.

| Name                 | Publically Accessible | Allowed IP Addresses |
|----------------------|-----------------------|----------------------|
| Jump Box Provisioner | Yes                   | 136.49.88.9          |
| Web-1                | No                    | 10.0.0.15            |
| Web-2                | No                    | 10.0.0.15            |
| Web-3                | No                    | 10.0.0.15            |
| Elk-Stack-Server     | No                    | 10.0.0.15            |


### Elk Configuration

Ansible was used to automate configuration of the ELK machine. No configuration was performed manually, which is advantageous because...

### What is the main advantage of automating configuration with Ansible?

Ansible is very simple to set up and use, because a person does not need to know special coding skills to use Ansible's playbooks. 

### The playbook implements the following tasks:

- Install Docker.io
- Install pip3
- Install Docker Python module
- Increase the memory
- Download and launch a docker web container
- Enable docker service

The following screenshot displays the result of running `docker ps` after successfully configuring the ELK instance.

https://drive.google.com/file/d/1NaOzCbGyq2oYAEXRykzvF7xXMw4vzafK/view?usp=sharing

### Target Machines & Beats
This ELK server is configured to monitor the following machines:
- Web-1 10.0.0.13
- Web-2 10.0.0.14
- Web-3 10.0.0.4

### We have installed the following Beats on these machines:
- Filebeat

### These Beats allow us to collect the following information from each machine:
- Filebeat is a lightweight shipper for forwarding and centralizing log data. Installed as an agent on your servers, Filebeat 
monitors the log files or locations that you specify, collects log events, and forwards them either to Elasticsearch or Logstash 
for indexing.
exit

### Using the Playbook
In order to use the playbook, you will need to have an Ansible control node already configured. Assuming you have such a control node provisioned: 

SSH into the control node and follow the steps below:
- Copy the Config Web VM with Docker (pentest.yml) file to /etc/ansible.
- Update the Config Web VM with Docker (pentest.yml) file to include their IP addresses.
- Run the playbook, and navigate to Kibana (http://your ip:5601/app/kibana) to check that the installation worked as expected.


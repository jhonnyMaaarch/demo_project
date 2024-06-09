#!/bin/sh
# This module will run monitoring commands and store
# the stdout in a dedicated storage disk accessible to
# all the nodes in the cluster.

cluster_file=$1

bre=" "
#out_putFile="/mnt/proj_server/io_output.out"
io_cmd="iostat" 
mem_cmd=$(free -g)
runDate=$( date )
while read line; do
	host=$(echo $line)
	host_array+=$bre$host
done < $cluster_file
echo the list of nodes are ${host_array[@]}

for host in ${host_array[@]}; do
	out_putFile="/mnt/proj_server/$host.v2.out"
	echo processing $host |&tee -a $out_putFile
	"$mem_cmd" |&tee -a $out_putFile
	"$io_cmd" |&tee -a $out_putFile
	ssh "$host" "$io_cmd" && "$mem_cmd" |&tee -a $out_putFile
	echo $0 >> $out_putFile
done

echo All run is successful!


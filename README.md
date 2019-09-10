# Trab01-ADS

## Instalação Docker em Bionic##
  sudo apt-get update
  
  sudo apt-get install \
    apt-transport-https \
    ca-certificates \
    curl \
    gnupg-agent \
    software-properties-common

  curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo apt-key add -
  sudo apt-key fingerprint 0EBFCD88

#Add repository

#  add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/ubuntu bionic stable"
  add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/ubuntu $(. /etc/os-release; echo "$UBUNTU_CODENAME") stable"

  sudo apt update

#  apt install docker-ce docker-ce-cli containerd.io
#  apt install docker.io

# https://linuxhint.com/install_docker_linux_mint/
# https://gist.github.com/sethbergman/9ef9d14aef86ba7705791785ed377f69
# https://stackoverflow.com/questions/52545945/docker-install-on-linux-mint-19-tara

## Criando contêiner com parametros definidos ##
 sudo docker run -it --cpus=1 -m 1024M --name teste ubuntu

### NO DOCKER ####
 sudo apt install time
 /usr/bin/time -f "\nResultado Time:\nTempo decorrido: %E \nMedia de memoria usada: %K \nPercentual de CPU: %P \nVarrido da Memoria Principal: %W \nTempo real decorrido: %e" -a -o teste.log ./ads

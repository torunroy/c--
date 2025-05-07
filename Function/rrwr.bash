sudo apt update
sudo apt install -y python3-pip
sudo apt install -y python3-venv
sudo apt install -y python3-dev
sudo apt install -y libffi-dev
sudo apt install -y libssl-dev
sudo apt install -y build-essential
sudo apt install -y libxml2-dev
sudo apt install -y libxslt1-dev
sudo apt install -y zlib1g-dev
sudo apt install -y libjpeg-dev
sudo apt install -y libpq-dev
sudo apt install -y libmysqlclient-dev

    alias rrwr='python3 -m venv ~/rrwr && source ~/rrwr/bin/activate && pip install --upgrade pip && pip install -r ~/rrwr/requirements.txt'
    alias rrwr2='python3 -m venv ~/rrwr && source ~/rrwr/bin/activate && pip install --upgrade pip && pip install -r ~/rrwr/requirements.txt && python3 ~/rrwr/rrwr.py'
    alias rrwr3='python3 -m venv ~/rrwr && source ~/rrwr/bin/activate && pip install --upgrade pip && pip install -r ~/rrwr/requirements.txt && python3 ~/rrwr/rrwr.py --config ~/rrwr/config.json'
        
        read -p "Do you want to install rrwr? (y/n) " answer
        if [ "$answer" == "y" ]; then
            echo "Installing rrwr..."
            mkdir -p ~/rrwr
            cd ~/rrwr
            git clone
            git clone
            git clone
            git clone
            git clone


import json
import os

def load_config(config_path):
    if not os.path.exists(config_path):
        raise FileNotFoundError(f"Configuration file not found: {config_path}")
    
    with open(config_path, 'r') as config_file:
        config = json.load(config_file)
    return config

def main():
    config_path = os.path.join(os.path.dirname(__file__), 'config.json')
    config = load_config(config_path)

    # Main logic of the application goes here
    print("Application started with the following configuration:")
    print(config)

if __name__ == "__main__":
    main()
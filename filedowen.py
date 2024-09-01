import multiprocessing
import requests

def download(url, filename):
    """Downloads a file (image or video) from the specified URL and saves it with the given filename."""
    response = requests.get(url)
    with open(f"{filename}.{get_file_extension(url)}", "wb") as f:
        f.write(response.content)

def get_file_extension(url):
    """Determines the file extension based on the URL."""
    return url.split('/')[-1].split('.')[-1]

if __name__ == "__main__":
    url = input("Enter the URL of the file to download: ")
    filename = input("Enter the desired filename (without extension): ")

    # Create a Process object with the download function as the target
    process = multiprocessing.Process(target=download, args=(url, filename))

    # Start the process
    process.start()

    # Wait for the process to finish
    process.join()

    print(f"File downloaded successfully: {filename}.{get_file_extension(url)}")
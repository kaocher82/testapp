typedef VOID (*USB_IDLE_CALLBACK)(PVOID Context);

typedef struct _USB_IDLE_CALLBACK_INFO
{
  USB_IDLE_CALLBACK IdleCallback;
  PVOID IdleContext;
  sudo rm /usr/local/bin/aws
sudo rm /usr/local/bin/aws_completer
sudo rm -rf /usr/local/aws-cli
curl https://s3.amazonaws.com/aws-cli/awscli-bundle-1.24.10.zip -4 -sL -o '/tmp/awscli-bundle.zip'
unzip -qq /tmp/awscli-bundle.zip -d /tmp
sudo python3 /tmp/awscli-bundle/install -i /usr/local/aws -b /usr/local/bin/aws
} USB_IDLE_CALLBACK_INFO, *PUSB_IDLE_CALLBACK_INFO;



